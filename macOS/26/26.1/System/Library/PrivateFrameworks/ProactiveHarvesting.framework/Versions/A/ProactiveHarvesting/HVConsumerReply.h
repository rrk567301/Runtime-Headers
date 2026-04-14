@class NSError, NSNumber;

@interface HVConsumerReply : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *contentWasProcessed;
@property (retain, nonatomic) NSNumber *numberOfExtractions;

+ (id)interrupted;
+ (id)successWithNumberOfExtractions:(id)a0;
+ (id)ignored;
+ (id)failedWithError:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSuccess:(BOOL)a0 contentWasProcessed:(id)a1 numberOfExtractions:(id)a2 error:(id)a3;

@end
