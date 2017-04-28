/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */


#import "BrowserController.h"
//#import "RecentlyClosedTabViewControllerDelegate-Protocol.h"
//#import "RotatablePopoverControllerDelegate-Protocol.h"
//#import "TabBarDelegate-Protocol.h"

@interface BrowserController (BrowserControllerTabs) //<TabBarDelegate, RecentlyClosedTabViewControllerDelegate, RotatablePopoverControllerDelegate>
- (void)tabController:(id)arg1 tabDocumentDidUpdateURL:(id)arg2;
- (void)tabControllerDidStartLoading:(id)arg1;
- (void)tabController:(id)arg1 didFinishLoadingWithError:(BOOL)arg2;
- (void)tabController:(id)arg1 tabDocumentDidUpdateTitle:(id)arg2;
- (void)tabController:(id)arg1 tabDocumentDidUpdateBackForward:(id)arg2;
- (void)tabDocumentProgressDidStall:(id)arg1;
- (void)tabDocument:(id)arg1 progressChanged:(float)arg2;
- (void)didStartLoadingResource;
- (void)didStopLoadingResource;
- (void)tabController:(id)arg1 tabDocument:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)tabController:(id)arg1 tabDocument:(id)arg2 didCancelAuthenticationChallenge:(id)arg3;
- (void)tabController:(id)arg1 showAlertForTabDocument:(id)arg2;
- (void)tabController:(id)arg1 hideAlertForTabDocument:(id)arg2;
- (struct CGRect)tabControllerFrame;
- (id)_tabDocumentRepresentedByTabBarItem:(id)arg1;
- (BOOL)tabBarCanAddTab:(id)arg1;
- (BOOL)tabBar:(id)arg1 canMoveItem:(id)arg2;
- (BOOL)tabBar:(id)arg1 canCloseItem:(id)arg2;
- (void)tabBarAddTab:(id)arg1;
- (void)tabBarAddTabLongPress:(id)arg1;
- (void)popoverController:(id)arg1 willPresentAfterRotationToInterfaceOrientation:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)tabBar:(id)arg1 moveItem:(id)arg2 overItem:(id)arg3;
- (void)tabBar:(id)arg1 closeItem:(id)arg2;
- (void)tabBar:(id)arg1 activateItem:(id)arg2;
- (void)recentlyClosedTabViewController:(id)arg1 didSelectTabDocument:(id)arg2;
- (void)setShowingTabs:(BOOL)arg1;
- (void)resetViewOnTabDocument:(id)arg1;
- (void)switchFromTabDocument:(id)arg1 toTabDocument:(id)arg2 inBackground:(BOOL)arg3;
- (void)tabController:(id)arg1 didSwitchFromTabDocument:(id)arg2 toTabDocument:(id)arg3 inBackground:(BOOL)arg4;
- (struct CGRect)defaultScreenShotFrame;
- (struct CGRect)snapshotFrameForCurrentScrollViewContentOffset;
- (struct CGRect)frameWhenReturningFromExpose;
- (id)_blankTabDocumentToReuse;
- (id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2;
- (id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_makeRoomForNewTabDocument:(id)arg1;
- (id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 fromExternalApplication:(BOOL)arg4;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
- (void)webViewFocus:(id)arg1;
- (void)_setTabBarItemsFixed:(BOOL)arg1;
- (void)updateTabBarAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)updateTabBarAnimated:(BOOL)arg1;
- (void)_updateTabExposeButtonIndicatorExcludingBlanks:(BOOL)arg1;
- (void)updateTabExposeButtonIndicator;
- (void)updateTabExposeButtonIndicatorExcludingBlankDocuments;
- (void)_closeDocument:(id)arg1;
- (BOOL)closePendingDocuments;
- (void)webViewClose:(id)arg1;
- (void)_addAuthenticationChallenge:(id)arg1 displayNow:(BOOL)arg2;
- (void)hideBannerForTabExpose;
- (void)showBannerFromTabExpose;
- (BOOL)isBannerHiddenForTabExpose;
- (BOOL)prepareTabExposeTest;
- (void)_runTabExposeTest;
- (void)runTabExposeTest;
- (BOOL)isRunningTabExposeTest;
- (void)finishedTabExposeTest;
- (void)tabController:(id)arg1 composeEmailWithMailToURL:(id)arg2 forTabDocument:(id)arg3;
@end
