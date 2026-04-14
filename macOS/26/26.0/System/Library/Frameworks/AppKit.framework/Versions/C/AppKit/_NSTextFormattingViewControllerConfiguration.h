@class NSArray;

@interface _NSTextFormattingViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* function */ groups;
    void /* function */ __formattingStyles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _isInspectorBarView;
@property (nonatomic, readonly) BOOL _hasAvailableComponents;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, copy) NSArray *formattingStyles;
@property (nonatomic) unsigned long long _controlSize;
@property (nonatomic) BOOL _useVerticalLayout;
@property (nonatomic) BOOL _useCenterAlignment;
@property (nonatomic) BOOL _useAdditionalSpacingBetweenGroups;
@property (nonatomic) BOOL isInspectorBarView;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroups:(id)a0;
- (void)_configureForInspectorBar;
- (id)initWithInspectorBarClient:(id)a0;

@end
