@class NSString, NSDictionary, NSDate;

@interface LCFModelMetadata : NSObject

@property (nonatomic) char isAvailable;
@property (nonatomic) char isOriginalEmptyModel;
@property (nonatomic) char isImported;
@property (nonatomic) char isLocal;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateTrained;
@property (copy, nonatomic) NSString *sha256;
@property (copy, nonatomic) NSDictionary *custom;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)toDictionary;

@end
