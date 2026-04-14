@class NSPredicate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKLStreamTrafficObserver : CKLStreamObserver

@property (retain) NSMutableDictionary *requestDictionary;
@property (retain) NSObject<OS_dispatch_queue> *printQueue;
@property (copy, nonatomic) NSPredicate *logMessageFilter;
@property (copy, nonatomic) id /* block */ requestParsedBlock;

- (void).cxx_destruct;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)a0;
- (void)eventMatched:(id)a0;
- (void)parseRequestArrayAndPrint:(id)a0;
- (id)parserFromConfigurationMessage:(id)a0;

@end
