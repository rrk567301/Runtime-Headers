@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *formatIdentifier;
@property (retain, nonatomic) NSString *formatVersion;

- (void).cxx_destruct;
- (id)init;

@end
