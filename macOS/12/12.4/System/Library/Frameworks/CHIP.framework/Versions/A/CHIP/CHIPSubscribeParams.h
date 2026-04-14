@class NSNumber;

@interface CHIPSubscribeParams : CHIPReadParams

@property (retain, nonatomic) NSNumber *keepPreviousSubscriptions;

- (id)init;
- (void).cxx_destruct;

@end
