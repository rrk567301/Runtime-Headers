@class NSNumber;

@interface CHIPSubscribeParams : CHIPReadParams

@property (retain, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (retain, nonatomic) NSNumber *autoResubscribe;

- (id)init;
- (void).cxx_destruct;

@end
