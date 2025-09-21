@class NSString;

@interface VCConfiguredSleepWorkflow : WFDatabaseObjectDescriptor <WFGlyphDrawableItem, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long backgroundColorValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *summaryString;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) double iconScale;
@property (readonly, nonatomic) char isAppLaunchWorkflow;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })glyphSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkflowIdentifier:(id)a0 bundleIdentifierForDisplay:(id)a1 summaryString:(id)a2 name:(id)a3 actionIdentifier:(id)a4 glyphCharacter:(unsigned short)a5 backgroundColorValue:(long long)a6 isAppLaunchWorkflow:(char)a7;
- (void)setIconImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
