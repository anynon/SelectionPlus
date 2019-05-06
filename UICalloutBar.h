/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, September 20, 2017 at 9:27:24 PM Eastern European Summer Time
* Operating System: Version 11.0 (Build 15A372)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/
//
// #import <UIKit/UIKit-Structs.h>
// #import <UIKit/UIView.h>

@class UIWindow, NSArray, NSMutableArray, UICalloutBarButton, UICalloutBarBackground, NSDictionary, NSString, UIScrollView, UIStackView, UIResponder;

@interface UICalloutBar : UIView {

	id m_delegate;
	CGPoint m_pointBelowControls;
	CGPoint m_pointAboveControls;
	CGPoint m_pointLeftOfControls;
	CGPoint m_pointRightOfControls;
	CGPoint m_targetPoint;
	int m_targetDirection;
	bool m_targetHorizontal;
	bool m_fadeAfterCommand;
	bool m_recalcVisibleItems;
	int m_pageCount;
	int m_currentPage;
	bool m_supressesHorizontalMovement;
	CGRect m_controlFrame;
	CGRect m_targetRect;
	UIWindow* m_targetWindow;
	CGRect m_supressesHorizontalMovementFrame;
	double m_supressedHorizontalMovementX;
	int m_arrowDirection;
	double m_availableSpaceOnLeft;
	double m_availableSpaceOnRight;
	NSArray* m_systemButtonDescriptions;
	NSMutableArray* m_currentSystemButtons;
	NSMutableArray* m_extraButtons;
	UICalloutBarButton* m_nextButton;
	UICalloutBarButton* m_previousButton;
	NSMutableArray* m_rectsToEvade;
	UICalloutBarBackground* m_overlay;
	double m_fadedTime;
	NSDictionary* m_currentAppearOrFadeContext;
	id m_responderTarget;
	NSArray* m_replacements;
	NSArray* m_extraItems;
	NSString* m_untruncatedString;
	bool m_didPromptForReplace;
	bool m_showAllReplacements;
	bool m_ignoreFade;
	bool m_suppressesAppearance;
	bool m_isDisplayingVertically;
	UIScrollView* m_verticalScrollView;
	UIStackView* m_verticalStackView;
	NSMutableArray* m_axSeparatorViews;

}

@property (assign,nonatomic) CGPoint pointAboveControls;
@property (assign,nonatomic) CGPoint pointBelowControls;
@property (assign,nonatomic) CGPoint pointLeftOfControls;
@property (assign,nonatomic) CGPoint pointRightOfControls;
@property (assign,nonatomic) CGPoint targetPoint;
@property (assign,nonatomic) int targetDirection;
@property (assign,nonatomic) bool targetHorizontal;
@property (assign,nonatomic) CGRect targetRect;
@property (assign,nonatomic,weak) UIWindow* targetWindow;
@property (assign,nonatomic) int arrowDirection;
@property (assign,nonatomic) CGRect controlFrame;
@property (nonatomic,retain) NSDictionary* currentAppearOrFadeContext;
@property (assign,nonatomic) bool suppressesAppearance;
@property (nonatomic,readonly) bool isDisplayingVertically;
@property (nonatomic,readonly) UIScrollView* verticalScrollView;
@property (nonatomic,readonly) UIStackView* verticalStackView;
@property (nonatomic,readonly) NSArray* rectsToEvade;
@property (assign,nonatomic,weak) id delegate;
@property (nonatomic,readonly) bool visible;
@property (assign,nonatomic,weak) UIResponder* responderTarget;
@property (nonatomic,copy) NSArray* replacements;
@property (assign,nonatomic) bool showAllReplacements;
@property (nonatomic,copy) NSArray* extraItems;
@property (nonatomic,copy) NSString* untruncatedString;
@property (assign,nonatomic) bool supressesHorizontalMovement;
+(id)activeCalloutBar;
+(void)fadeSharedCalloutBar;
+(id)sharedCalloutBar;
+(void)hideSharedCalloutBar;
+(void)performWithoutAffectingSharedCalloutBar:(/*^block*/ id)arg1 ;
+(void)_releaseSharedInstance;
+(bool)sharedCalloutBarIsVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)hide;
-(void)show;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)_touchesInsideShouldHideCalloutBar;
-(bool)visible;
-(void)fade;
-(void)update;
-(void)setSupressesHorizontalMovement:(bool)arg1 ;
-(void)clearSupressesHorizontalMovementFrame;
-(void)setUntruncatedString:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(CGRect)targetRect;
-(bool)hasReplacements;
-(id)replacements;
-(id)targetWindow;
-(id)extraItems;
-(void)setExtraItems:(id)arg1 ;
-(void)setResponderTarget:(id)arg1 ;
-(bool)recentlyFaded;
-(void)clearEvadeRects;
-(void)addRectToEvade:(CGRect)arg1 ;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 pointBelowControls:(CGPoint)arg3 pointAboveControls:(CGPoint)arg4 ;
-(void)setReplacements:(id)arg1 ;
-(void)appear;
-(void)clearReplacements;
-(CGRect)controlFrame;
-(int)targetDirection;
-(CGPoint)targetPoint;
-(void)buttonHighlighted:(id)arg1 highlighted:(bool)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(void)_showPreviousItems:(id)arg1 ;
-(void)_showNextItems:(id)arg1 ;
-(void)applicationDidAddDeactivationReason:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 ;
-(void)_fadeAfterCommand:(SEL)arg1 ;
-(bool)_updateVisibleItemsAnimated:(bool)arg1 ;
-(CGRect)textEffectsWindowSafeArea;
-(id)rectsToEvade;
-(bool)supressesHorizontalMovement;
-(double)supressHorizontalXMovementIfNeededForPoint:(CGPoint)arg1 proposedX:(double)arg2 ;
-(bool)rectClear:(CGRect)arg1 ;
-(int)arrowDirection;
-(void)setArrowDirection:(int)arg1 ;
-(bool)calculateControlFrameForCalloutSize:(CGSize)arg1 below:(bool)arg2 ;
-(void)setTargetDirection:(int)arg1 ;
-(bool)calculateControlFrameForCalloutSize:(CGSize)arg1 right:(bool)arg2 ;
-(bool)calculateControlFrameInsideTargetRect:(CGSize)arg1 ;
-(CGPoint)pointBelowControls;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(CGPoint)pointAboveControls;
-(bool)setFrameForSize:(CGSize)arg1 ;
-(void)shrinkButtonTextSize:(id)arg1 ;
-(void)updateForCurrentVerticalPage;
-(void)updateForCurrentHorizontalPage;
-(void)addVerticalSeparatorAfterButton:(id)arg1 ;
-(void)setControlFrame:(CGRect)arg1 ;
-(void)updateAvailableButtons;
-(double)maxVerticalCalloutHeightForMinButtonHeight:(double)arg1 ;
-(void)configureButtonsForVerticalView:(double)arg1 ;
-(void)configureButtons:(double)arg1 ;
-(void)adjustFrameToAvoidDividerOnArrow;
-(void)updateForCurrentPage;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)setTargetWindow:(id)arg1 ;
-(void)setTargetHorizontal:(bool)arg1 ;
-(void)setPointBelowControls:(CGPoint)arg1 ;
-(void)setPointAboveControls:(CGPoint)arg1 ;
-(void)setPointLeftOfControls:(CGPoint)arg1 ;
-(void)setPointRightOfControls:(CGPoint)arg1 ;
-(bool)suppressesAppearance;
-(void)_endOngoingAppearOrFadeAnimations;
-(void)setCurrentAppearOrFadeContext:(id)arg1 ;
-(void)appearAnimationDidStopWithContext:(id)arg1 ;
-(id)currentAppearOrFadeContext;
-(void)fadeAnimationDidStopWithContext:(id)arg1 finished:(bool)arg2 ;
-(void)resetPage;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 pointLeftOfControls:(CGPoint)arg3 pointRightOfControls:(CGPoint)arg4 ;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 arrowDirection:(int)arg3 ;
-(void)updateAnimated:(bool)arg1 ;
-(CGPoint)pointLeftOfControls;
-(CGPoint)pointRightOfControls;
-(bool)targetHorizontal;
-(id)responderTarget;
-(bool)showAllReplacements;
-(void)setShowAllReplacements:(bool)arg1 ;
-(id)untruncatedString;
-(void)setSuppressesAppearance:(bool)arg1 ;
-(bool)isDisplayingVertically;
-(id)verticalScrollView;
-(id)verticalStackView;
@end

// /* Generated by RuntimeBrowser
//    Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
//  */
//
// @interface UICalloutBar : UIView {
//     int  m_arrowDirection;
//     double  m_availableSpaceOnLeft;
//     double  m_availableSpaceOnRight;
//     NSMutableArray * m_axSeparatorViews;
//     struct CGRect {
//         struct CGPoint {
//             double x;
//             double y;
//         } origin;
//         struct CGSize {
//             double width;
//             double height;
//         } size;
//     }  m_controlFrame;
//     NSDictionary * m_currentAppearOrFadeContext;
//     int  m_currentPage;
//     NSMutableArray * m_currentSystemButtons;
//     id  m_delegate;
//     bool  m_didPromptForReplace;
//     NSMutableArray * m_extraButtons;
//     NSArray * m_extraItems;
//     bool  m_fadeAfterCommand;
//     double  m_fadedTime;
//     bool  m_ignoreFade;
//     bool  m_isDisplayingVertically;
//     UICalloutBarButton * m_nextButton;
//     UICalloutBarBackground * m_overlay;
//     int  m_pageCount;
//     struct CGPoint {
//         double x;
//         double y;
//     }  m_pointAboveControls;
//     struct CGPoint {
//         double x;
//         double y;
//     }  m_pointBelowControls;
//     struct CGPoint {
//         double x;
//         double y;
//     }  m_pointLeftOfControls;
//     struct CGPoint {
//         double x;
//         double y;
//     }  m_pointRightOfControls;
//     UICalloutBarButton * m_previousButton;
//     bool  m_recalcVisibleItems;
//     NSMutableArray * m_rectsToEvade;
//     NSArray * m_replacements;
//     id  m_responderTarget;
//     bool  m_showAllReplacements;
//     bool  m_suppressesAppearance;
//     double  m_supressedHorizontalMovementX;
//     bool  m_supressesHorizontalMovement;
//     struct CGRect {
//         struct CGPoint {
//             double x;
//             double y;
//         } origin;
//         struct CGSize {
//             double width;
//             double height;
//         } size;
//     }  m_supressesHorizontalMovementFrame;
//     NSArray * m_systemButtonDescriptions;
//     int  m_targetDirection;
//     bool  m_targetHorizontal;
//     struct CGPoint {
//         double x;
//         double y;
//     }  m_targetPoint;
//     struct CGRect {
//         struct CGPoint {
//             double x;
//             double y;
//         } origin;
//         struct CGSize {
//             double width;
//             double height;
//         } size;
//     }  m_targetRect;
//     UIView * m_targetView;
//     NSString * m_untruncatedString;
//     UIScrollView * m_verticalScrollView;
//     UIStackView * m_verticalStackView;
// }
//
// @property (nonatomic) int arrowDirection;
// @property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } controlFrame;
// @property (nonatomic, retain) NSDictionary *currentAppearOrFadeContext;
// @property (nonatomic) id delegate;
// @property (nonatomic, copy) NSArray *extraItems;
// @property (nonatomic, readonly) bool isDisplayingVertically;
// @property (nonatomic) struct CGPoint { double x1; double x2; } pointAboveControls;
// @property (nonatomic) struct CGPoint { double x1; double x2; } pointBelowControls;
// @property (nonatomic) struct CGPoint { double x1; double x2; } pointLeftOfControls;
// @property (nonatomic) struct CGPoint { double x1; double x2; } pointRightOfControls;
// @property (nonatomic, readonly) NSArray *rectsToEvade;
// @property (nonatomic, copy) NSArray *replacements;
// @property (nonatomic) UIResponder *responderTarget;
// @property (nonatomic) bool showAllReplacements;
// @property (nonatomic) bool suppressesAppearance;
// @property (nonatomic) bool supressesHorizontalMovement;
// @property (nonatomic) int targetDirection;
// @property (nonatomic) bool targetHorizontal;
// @property (nonatomic) struct CGPoint { double x1; double x2; } targetPoint;
// @property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
// @property (nonatomic) UIView *targetView;
// @property (nonatomic, copy) NSString *untruncatedString;
// @property (nonatomic, readonly) UIScrollView *verticalScrollView;
// @property (nonatomic, readonly) UIStackView *verticalStackView;
// @property (nonatomic, readonly) bool visible;
//
// // Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
//
// + (void)_releaseSharedInstance;
// + (id)activeCalloutBar;
// + (void)fadeSharedCalloutBar;
// + (void)fadeSharedCalloutBarIfTargetView:(id)arg1;
// + (void)hideSharedCalloutBar;
// + (void)hideSharedCalloutBarIfTargetView:(id)arg1;
// + (void)performWithoutAffectingSharedCalloutBar:(id /* block */)arg1;
// + (id)sharedCalloutBar;
// + (bool)sharedCalloutBarIsVisible;
//
// - (void).cxx_destruct;
// - (SEL)_actionForButton:(id)arg1;
// - (void)_endOngoingAppearOrFadeAnimations;
// - (void)_fadeAfterCommand:(SEL)arg1;
// - (void)_showNextItems:(id)arg1;
// - (void)_showPreviousItems:(id)arg1;
// - (id)_targetForAction:(SEL)arg1;
// - (bool)_touchesInsideShouldHideCalloutBar;
// - (bool)_updateVisibleItemsAnimated:(bool)arg1;
// - (id)_visibleButtons;
// - (void)dealloc;
//
// // Image: /Developer/usr/lib/libMainThreadChecker.dylib
//
// - (void)addRectToEvade:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
// - (void)addVerticalSeparatorAfterButton:(id)arg1;
// - (void)adjustFrameToAvoidDividerOnArrow;
// - (void)appear;
// - (void)appearAnimationDidStopWithContext:(id)arg1;
// - (void)applicationDidAddDeactivationReason:(id)arg1;
// - (int)arrowDirection;
// - (void)buttonHighlighted:(id)arg1 highlighted:(bool)arg2;
// - (bool)calculateControlFrameForCalloutSize:(struct CGSize { double x1; double x2; })arg1 below:(bool)arg2;
// - (bool)calculateControlFrameForCalloutSize:(struct CGSize { double x1; double x2; })arg1 right:(bool)arg2;
// - (bool)calculateControlFrameInsideTargetRect:(struct CGSize { double x1; double x2; })arg1;
// - (void)clearEvadeRects;
// - (void)clearReplacements;
// - (void)clearSupressesHorizontalMovementFrame;
// - (void)configureButtons:(double)arg1;
// - (void)configureButtonsForVerticalView:(double)arg1;
// - (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })controlFrame;
// - (id)currentAppearOrFadeContext;
// - (id)delegate;
// - (id)extraItems;
// - (void)fadeAnimationDidStopWithContext:(id)arg1 finished:(bool)arg2;
// - (void)fadeIfTargetView:(id)arg1;
// - (bool)hasReplacements;
// - (void)hideIfTargetView:(id)arg1;
// - (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
// - (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
// - (bool)isDisplayingVertically;
// - (double)maxVerticalCalloutHeightForMinButtonHeight:(double)arg1;
// - (struct CGPoint { double x1; double x2; })pointAboveControls;
// - (struct CGPoint { double x1; double x2; })pointBelowControls;
// - (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
// - (struct CGPoint { double x1; double x2; })pointLeftOfControls;
// - (struct CGPoint { double x1; double x2; })pointRightOfControls;
// - (bool)recentlyFaded;
// - (bool)rectClear:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
// - (id)rectsToEvade;
// - (void)removeFromSuperview;
// - (id)replacements;
// - (void)resetPage;
// - (id)responderTarget;
// - (void)setArrowDirection:(int)arg1;
// - (void)setControlFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
// - (void)setCurrentAppearOrFadeContext:(id)arg1;
// - (void)setDelegate:(id)arg1;
// - (void)setExtraItems:(id)arg1;
// - (bool)setFrameForSize:(struct CGSize { double x1; double x2; })arg1;
// - (void)setPointAboveControls:(struct CGPoint { double x1; double x2; })arg1;
// - (void)setPointBelowControls:(struct CGPoint { double x1; double x2; })arg1;
// - (void)setPointLeftOfControls:(struct CGPoint { double x1; double x2; })arg1;
// - (void)setPointRightOfControls:(struct CGPoint { double x1; double x2; })arg1;
// - (void)setReplacements:(id)arg1;
// - (void)setResponderTarget:(id)arg1;
// - (void)setShowAllReplacements:(bool)arg1;
// - (void)setSuppressesAppearance:(bool)arg1;
// - (void)setSupressesHorizontalMovement:(bool)arg1;
// - (void)setTargetDirection:(int)arg1;
// - (void)setTargetHorizontal:(bool)arg1;
// - (void)setTargetPoint:(struct CGPoint { double x1; double x2; })arg1;
// - (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
// - (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2 arrowDirection:(int)arg3;
// - (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2 pointBelowControls:(struct CGPoint { double x1; double x2; })arg3 pointAboveControls:(struct CGPoint { double x1; double x2; })arg4;
// - (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2 pointLeftOfControls:(struct CGPoint { double x1; double x2; })arg3 pointRightOfControls:(struct CGPoint { double x1; double x2; })arg4;
// - (void)setTargetView:(id)arg1;
// - (void)setUntruncatedString:(id)arg1;
// - (void)show;
// - (bool)showAllReplacements;
// - (void)shrinkButtonTextSize:(id)arg1;
// - (bool)suppressesAppearance;
// - (double)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint { double x1; double x2; })arg1 proposedX:(double)arg2;
// - (bool)supressesHorizontalMovement;
// - (int)targetDirection;
// - (bool)targetHorizontal;
// - (struct CGPoint { double x1; double x2; })targetPoint;
// - (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
// - (id)targetView;
// - (int)textEffectsVisibilityLevel;
// - (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEffectsWindowSafeArea;
// - (id)untruncatedString;
// - (void)update;
// - (void)updateAnimated:(bool)arg1;
// - (void)updateForCurrentHorizontalPage;
// - (void)updateForCurrentPage;
// - (void)updateForCurrentVerticalPage;
// - (id)verticalScrollView;
// - (id)verticalStackView;
// - (bool)visible;
//
// // Image: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
//
// + (Class)safeCategoryBaseClass;
//
// - (void)_accessibilityAddSpeakItemToExtras:(id)arg1 selector:(SEL)arg2;
// - (void)buttonPressed:(id)arg1;
// - (void)fade;
// - (void)hide;
// - (void)updateAvailableButtons;
// @end