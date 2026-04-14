@class NSError, NSString;

@interface PFTFutureResult : NSObject <BSDescriptionStreaming, NSCopying>

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setResult:(id)a0 error:(id)a1;
- (void)appendDescriptionToStream:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
