@class NSMutableDictionary;

@interface PPSTimestampConverterRegistry : NSObject

@property (retain) NSMutableDictionary *converters;

+ (id)sharedInstance;
+ (id)converterForFilepath:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
