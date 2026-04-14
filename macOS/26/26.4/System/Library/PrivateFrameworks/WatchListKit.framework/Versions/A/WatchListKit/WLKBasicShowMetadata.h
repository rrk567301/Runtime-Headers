@class NSString, NSDate;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata

@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSDate *finaleDate;
@property (readonly, copy, nonatomic) NSString *network;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
