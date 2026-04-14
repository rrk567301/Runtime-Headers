@class NSMutableDictionary;

@interface ATXCurrentABGroupDetails : NSObject

@property (readonly, nonatomic) NSMutableDictionary *subTypeToABGroup;
@property (readonly, nonatomic) NSMutableDictionary *subTypeToFinalSubscore;

- (void)setFinalSubscore:(id)a0 subType:(unsigned char)a1;
- (id)init;
- (void)setABGroupFromFilename:(id)a0 subType:(unsigned char)a1 filenameToABGroup:(id)a2;
- (void)loadAssetFromAssetMapping:(id)a0;
- (id)abGroupIdentifierForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)initWithAssetMapping:(id)a0;
- (id)abGroupIdentifierForFilename:(id)a0;
- (id)finalSubScoreForConsumerSubType:(unsigned char)a0;

@end
