@class NSString, NSNumber;

@interface CHIPModeSelectClusterModeOptionStruct : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSNumber *semanticTag;

- (id)init;
- (void).cxx_destruct;

@end
