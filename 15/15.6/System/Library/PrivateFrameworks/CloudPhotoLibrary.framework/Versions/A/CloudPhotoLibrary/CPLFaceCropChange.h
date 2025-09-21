@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSData *resourceData;
@property (nonatomic) long long faceCropType;
@property (copy, nonatomic) NSString *rejectedPersonIdentifier;

+ (char)supportsDeletion;
+ (Class)relatedRecordClass;
+ (char)supportsDirectDeletion;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (id)personScopedIdentifier;
- (id)propertiesDescription;
- (void)setPersonScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (char)validateChangeWithError:(id *)a0;
- (char)validateFullRecord;

@end
