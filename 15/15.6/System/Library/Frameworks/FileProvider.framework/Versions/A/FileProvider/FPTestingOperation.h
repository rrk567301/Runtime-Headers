@class NSString;

@interface FPTestingOperation : NSObject <NSFileProviderTestingOperation, NSSecureCoding, NSCopying> {
    NSString *_operationIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asChildrenEnumeration;
- (id)asCollisionResolution;
- (id)asContentFetch;
- (id)asCreation;
- (id)asDeletion;
- (id)asIngestion;
- (id)asLookup;
- (id)asModification;
- (id)initWithOperationIdentifier:(id)a0;

@end
