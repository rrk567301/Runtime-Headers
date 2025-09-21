@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface MTL4ArchiveReply : NSObject {
    NSString *_errorMessage;
}

@property (readonly, copy) NSString *errorMessage;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *binary;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *reflectionBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *airScript;
@property (readonly) unsigned long long type;
@property (readonly) BOOL isError;

- (id)initWithError:(id)a0;
- (void)dealloc;
- (id)initWithData:(id)a0 reflectionBlock:(id)a1 airScript:(id)a2;
- (void)setTypeInternal:(unsigned long long)a0;

@end
