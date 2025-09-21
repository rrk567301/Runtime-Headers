@class DMFControlGroupIdentifier, NSDictionary, NSString, CATTaskClient, NSData;

@interface CRKShareTarget : NSObject

@property (retain, nonatomic) CATTaskClient *taskClient;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *secondaryName;
@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic, getter=isGroup) char group;
@property (nonatomic, getter=isCourse) char course;
@property (nonatomic, getter=isInstructor) char instructor;
@property (nonatomic) char supportsFileURLs;

+ (id)sandboxExtensionForPath:(id)a0;
+ (id)sandboxExtensionsForFileURLs:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToShareTarget:(id)a0;
- (id)operationToSendItems:(id)a0 fromBundleIdentifier:(id)a1 description:(id)a2 previewImageData:(id)a3;

@end
