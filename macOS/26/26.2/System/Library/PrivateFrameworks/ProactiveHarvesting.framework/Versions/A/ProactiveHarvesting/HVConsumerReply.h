@class NSError, NSNumber;

@interface HVConsumerReply : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *contentWasProcessed;
@property (retain, nonatomic) NSNumber *numberOfExtractions;

+ (id)ignored;
+ (id)successWithNumberOfExtractions:(id)a0;
+ (id)failedWithError:(id)a0;
+ (id)interrupted;

- (id)initWithSuccess:(BOOL)a0 contentWasProcessed:(id)a1 numberOfExtractions:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
