@class NSString, NSAttributedString;
@protocol MOMediaSectionFormattingDelegate;

@interface MOMediaSection : NSObject <NSCopying> {
    BOOL _reloading;
}

@property BOOL needsReload;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *alternateSupertitle;
@property (copy, nonatomic) NSString *alternateTitle;
@property (copy, nonatomic) NSString *alternateSubtitle;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (weak, nonatomic) id<MOMediaSectionFormattingDelegate> formattingDelegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)init;
- (void)_reloadProperties;
- (void).cxx_destruct;
- (void)_reloadPropertiesIfNeeded;

@end
