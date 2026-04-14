@class NSMutableDictionary;

@interface ATXCurrentABGroupDetails : NSObject

@property (readonly, nonatomic) NSMutableDictionary *subTypeToABGroup;
@property (readonly, nonatomic) NSMutableDictionary *subTypeToFinalSubscore;

- (id)finalSubScoreForConsumerSubType:(unsigned char)a0;
- (void)setABGroupFromFilename:(id)a0 subType:(unsigned char)a1 filenameToABGroup:(id)a2;
- (id)initWithAssetMapping:(id)a0;
- (void)loadAssetFromAssetMapping:(id)a0;
- (id)init;
- (id)abGroupIdentifierForConsumerSubType:(unsigned char)a0;
- (id)abGroupIdentifierForFilename:(id)a0;
- (void)setFinalSubscore:(id)a0 subType:(unsigned char)a1;
- (void).cxx_destruct;

@end
