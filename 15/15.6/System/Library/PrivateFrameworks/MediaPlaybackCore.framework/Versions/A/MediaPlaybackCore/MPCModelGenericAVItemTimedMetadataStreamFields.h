@class NSString, NSArray;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (nonatomic, getter=isExplicitContent) char explicitContent;
@property (copy, nonatomic) NSArray *artworkDictionaries;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
