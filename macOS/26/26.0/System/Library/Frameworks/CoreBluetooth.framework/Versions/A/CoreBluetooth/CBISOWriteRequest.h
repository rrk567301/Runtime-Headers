@class NSError, NSData;
@protocol CBStackISOStream;

@interface CBISOWriteRequest : NSObject

@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) id<CBStackISOStream> stream;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;

@end
