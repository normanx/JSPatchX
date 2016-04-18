/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Cocoa/Cocoa.h>

@class DVTCompletingTextView, DVTTextCompletionSession, NSString;

@interface DVTTextCompletionController : NSObject
{
    DVTCompletingTextView *_textView;
    DVTTextCompletionSession *_currentSession;
    NSString *_lastDismissingTextViewAction;
    NSString *_lastDismissingAppAction;
    //id <DVTCancellable> _appActionsMonitor;
    id _eventMonitor;
    BOOL _autoCompletionEnabled;
    BOOL _sessionInProgress;
    BOOL _registeredScrollListener;
}

+ (id)performanceLogAspect;
+ (id)completionUILogAspect;
@property(retain) DVTTextCompletionSession *currentSession; // @synthesize currentSession=_currentSession;
@property(readonly) BOOL sessionInProgress; // @synthesize sessionInProgress=_sessionInProgress;
@property(getter=isAutoCompletionEnabled) BOOL autoCompletionEnabled; // @synthesize autoCompletionEnabled=_autoCompletionEnabled;
@property(readonly) DVTCompletingTextView *textView; // @synthesize textView=_textView;
//- (void).cxx_destruct;
- (id)debugStateString;
- (BOOL)showInfoPanelForSelectedCompletion;
- (id)attributesForCompletionAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (BOOL)_textViewShouldInsertTab;
- (BOOL)_textViewShouldHandleCancel;
- (BOOL)_textViewShouldHandleComplete;
- (BOOL)_textViewShouldHandlePreviousCompletion;
- (BOOL)_textViewShouldHandleNextCompletion;
- (void)_applicationWillDispatchAction:(SEL)arg1;
- (BOOL)textViewShouldSetMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)textViewShouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)textViewShouldPerformAction:(SEL)arg1;
- (void)_textViewDidScroll:(id)arg1;
- (void)_textViewWillUndoRedo:(id)arg1;
- (void)textViewDidInsertText;
- (BOOL)textViewShouldInsertText:(id)arg1;
- (void)_textViewTextDidChange:(id)arg1;
- (void)textViewSelectionChanging;
- (void)_dismissAndInvalidateCurrentSession;
- (void)_hideCompletionsWithoutInvalidatingWithReason:(int)arg1;
- (void)hideCompletions;
- (BOOL)acceptCurrentCompletion;
- (BOOL)_showCompletionsAtCursorLocationExplicitly:(BOOL)arg1;
- (BOOL)showCompletionsAtCursorLocation;
- (void)setSessionInProgress:(BOOL)arg1;
@property(readonly, getter=isShowingCompletions) BOOL showingCompletions;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;
- (id)init;

@end
