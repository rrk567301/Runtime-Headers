@class NSNumber, NSArray;

@interface CHIPAccessControlClusterAccessControlEntry : NSObject

@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *authMode;
@property (retain, nonatomic) NSArray *subjects;
@property (retain, nonatomic) NSArray *targets;
@property (retain, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;

@end
