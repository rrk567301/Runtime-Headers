@class NSString, NSArray, GCController;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCControllerDescription : NSObject <_GCUpdatableIPCObjectDescription> {
    NSArray *_componentDescriptions;
    GCController *_materializedController;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<NSCopying, NSObject, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controllerClass;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (char)isEqualToDescription:(id)a0;
- (id)initWithIdentifier:(id)a0 components:(id)a1;
- (id)materializeWithContext:(id)a0;
- (char)update:(id)a0 withContext:(id)a1;

@end
