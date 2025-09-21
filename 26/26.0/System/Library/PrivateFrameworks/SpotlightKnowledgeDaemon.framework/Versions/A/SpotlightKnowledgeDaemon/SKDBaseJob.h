@class NSString, NSNumber, NSArray;
@protocol SKDEventLogger;

@interface SKDBaseJob : NSObject {
    id<SKDEventLogger> _logger;
}

@property (readonly, nonatomic) id<SKDEventLogger> logger;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSArray *pipelines;

- (void)setLogger:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(id)a1 pipelines:(id)a2;

@end
