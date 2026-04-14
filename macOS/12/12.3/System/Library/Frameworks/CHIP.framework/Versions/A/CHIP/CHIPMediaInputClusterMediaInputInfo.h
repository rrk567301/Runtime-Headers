@class NSNumber, NSString;

@interface CHIPMediaInputClusterMediaInputInfo : NSObject

@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *inputType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *descriptionString;

- (id)init;
- (void).cxx_destruct;

@end
