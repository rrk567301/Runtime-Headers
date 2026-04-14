@class NSNumber, NSArray;

@interface CHIPAccessControlClusterAccessControlEntry : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *authMode;
@property (retain, nonatomic) NSArray *subjects;
@property (retain, nonatomic) NSArray *targets;

- (id)init;
- (void).cxx_destruct;

@end
