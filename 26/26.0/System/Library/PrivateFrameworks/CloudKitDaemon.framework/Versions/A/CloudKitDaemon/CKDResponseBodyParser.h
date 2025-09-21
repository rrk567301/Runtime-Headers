@class NSError, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface CKDResponseBodyParser : NSObject {
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSData *_parserData;
}

@property (retain, nonatomic) NSError *parserError;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) NSData *parserData;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL testRepeatedParseResults;
@property (copy, nonatomic) id /* block */ objectParsedBlock;

- (void)processData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQoS:(long long)a0;
- (void)finishWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
