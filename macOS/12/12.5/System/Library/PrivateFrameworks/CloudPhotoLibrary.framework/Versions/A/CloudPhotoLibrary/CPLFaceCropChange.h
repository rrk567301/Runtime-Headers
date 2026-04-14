@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSData *resourceData;
@property (nonatomic) long long faceCropType;
@property (copy, nonatomic) NSString *rejectedPersonIdentifier;

+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (BOOL)supportsDeletion;
- (BOOL)supportsDirectDeletion;
- (id)propertiesDescription;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateFullRecord;
- (BOOL)validateChangeWithError:(id *)a0;
- (id)personScopedIdentifier;
- (void)setPersonScopedIdentifier:(id)a0;

@end
