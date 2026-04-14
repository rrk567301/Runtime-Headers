@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (void)sendAnalytics:(id)a0 compositor:(id)a1 imageDescriptor:(id)a2;
- (void).cxx_destruct;
- (id)compositorElementsForDecorations:(id)a0 primaryIconResourceProvider:(id)a1 imageDescriptor:(id)a2;
- (id)generateImage;
- (id)init;
- (id)iconSpecificationFromRecipe:(id)a0;

@end
