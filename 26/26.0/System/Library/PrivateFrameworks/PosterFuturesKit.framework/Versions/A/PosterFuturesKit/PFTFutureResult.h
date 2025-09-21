@class NSError, NSString;

@interface PFTFutureResult : NSObject <BSDescriptionStreaming, NSCopying>

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
