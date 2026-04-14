@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (void)encodeWithCoder:(id)a0;
- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (id)iconSpecificationFromRecipe:(id)a0;
- (id)init;
- (void)sendAnalytics:(id)a0 compositor:(id)a1 imageDescriptor:(id)a2;
- (id)compositorElementsForDecorations:(id)a0 primaryIconResourceProvider:(id)a1 imageDescriptor:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)generateImage;

@end
