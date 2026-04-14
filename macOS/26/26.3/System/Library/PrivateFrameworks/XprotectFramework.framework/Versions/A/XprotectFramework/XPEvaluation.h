@class NSURL, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface XPEvaluation : NSObject {
    NSURL *_pathURL;
    NSData *_data;
    int _result;
    NSObject<OS_dispatch_queue> *_evaluationQueue;
}

@property (readonly) NSMutableArray *errors;
@property (readonly) int assessmentResult;
@property (readonly) int assessmentClass;

- (void)begin;
- (id)init;
- (void).cxx_destruct;
- (int)_doEvaluation;
- (id)initWithPath:(id)a0 assessmentClass:(int)a1;
- (id)initWithPath:(id)a0 withData:(id)a1 assessmentClass:(int)a2;

@end
