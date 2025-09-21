@class NSArray, NSString;

@interface ATXDocumentScope : NSObject <ATXPredictionScope>

@property (readonly, nonatomic) NSArray *types;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUTTypes:(id)a0 error:(id *)a1;
- (BOOL)isEqualToATXDocumentScope:(id)a0;

@end
