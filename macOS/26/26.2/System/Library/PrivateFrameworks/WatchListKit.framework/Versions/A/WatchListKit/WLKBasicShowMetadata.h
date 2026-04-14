@class NSString, NSDate;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata

@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSDate *finaleDate;
@property (readonly, copy, nonatomic) NSString *network;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
