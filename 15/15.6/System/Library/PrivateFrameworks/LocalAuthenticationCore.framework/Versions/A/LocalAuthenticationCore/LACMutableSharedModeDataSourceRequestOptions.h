@class NSString;

@interface LACMutableSharedModeDataSourceRequestOptions : NSObject <LACSharedModeDataSourceRequestOptions>

@property (nonatomic) char isPreflight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;

@end
