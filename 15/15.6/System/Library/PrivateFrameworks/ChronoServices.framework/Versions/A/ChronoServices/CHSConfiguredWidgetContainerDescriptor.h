@class NSString, NSArray, CHSConfiguredWidgetDescriptor;

@interface CHSConfiguredWidgetContainerDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString *_activeWidgetUniqueIdentifier;
    long long _activeWidgetIndex;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) char canAppearInSecureEnvironment;
@property (readonly, nonatomic) unsigned long long page;
@property (readonly, nonatomic) CHSConfiguredWidgetDescriptor *activeWidget;
@property (readonly, nonatomic, getter=isStack) char stack;
@property (readonly, nonatomic) char isSystemConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithUniqueIdentifier:(id)a0 location:(long long)a1 canAppearInSecureEnvironment:(char)a2 page:(unsigned long long)a3 family:(long long)a4 widgets:(id)a5 activeWidget:(id)a6;
- (id)initWithUniqueIdentifier:(id)a0 location:(long long)a1 page:(unsigned long long)a2 family:(long long)a3 widgets:(id)a4 activeWidget:(id)a5;

@end
