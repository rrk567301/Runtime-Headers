@class NSData, NSError;

@interface CBISOReadRequest : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) unsigned int missedReads;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
