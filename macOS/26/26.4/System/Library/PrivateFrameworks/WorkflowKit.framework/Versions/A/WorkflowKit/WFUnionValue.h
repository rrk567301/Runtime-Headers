@class NSString;
@protocol WFParameterState;

@interface WFUnionValue : NSObject

@property (readonly, nonatomic) NSString *which;
@property (readonly, copy, nonatomic) id<WFParameterState> substate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithWhich:(id)a0 substate:(id)a1;

@end
