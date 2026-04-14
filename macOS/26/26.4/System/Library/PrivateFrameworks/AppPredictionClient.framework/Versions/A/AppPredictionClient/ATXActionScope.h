@class NSDictionary, NSString, ATXAppIdentity;

@interface ATXActionScope : NSObject <ATXPredictionScope>

@property (readonly, nonatomic) ATXAppIdentity *appIdentifier;
@property (readonly, nonatomic) NSDictionary *appEntityKeyValueMapping;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppIdentifier:(id)a0;
- (id)initWithAppIdentifier:(id)a0 appEntityKeyValueMapping:(id)a1 actionType:(unsigned long long)a2 intentClassName:(id)a3 error:(id *)a4;
- (BOOL)isEqualToATXActionScope:(id)a0;

@end
