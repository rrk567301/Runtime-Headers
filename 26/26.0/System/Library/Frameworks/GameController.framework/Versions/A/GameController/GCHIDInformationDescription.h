@class NSString, NSNumber, GCHIDInformation;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCHIDInformationDescription : NSObject <_GCControllerComponentDescription> {
    id<NSObject, NSCopying, NSSecureCoding> _identifier;
    NSNumber *_registryID;
    GCHIDInformation *_materializedComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithIdentifier:(id)a0 registryID:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
