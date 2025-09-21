@class NSData, NSString;

@interface _CPCounterfactualInfo : PBCodable <_CPCounterfactualInfo, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char cfDiffered;
@property (nonatomic) char cfUsed;
@property (nonatomic) int cfError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
