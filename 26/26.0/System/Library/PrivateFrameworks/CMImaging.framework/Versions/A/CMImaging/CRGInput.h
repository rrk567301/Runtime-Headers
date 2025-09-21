@class NSString;
@protocol CRGSourceInternal, CRGROI, CRGSource;

@interface CRGInput : CRGPort <CRGInput>

@property (readonly, nonatomic) id<CRGSourceInternal> sourceInternal;
@property (retain, nonatomic) id<CRGSource> source;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CRGROI> roi;

@end
