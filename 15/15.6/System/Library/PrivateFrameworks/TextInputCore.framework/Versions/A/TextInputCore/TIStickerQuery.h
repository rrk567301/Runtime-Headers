@class NSString;

@interface TIStickerQuery : NSObject

@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *normalizedQueryString;
@property (readonly, nonatomic) char isStopWord;
@property (readonly, nonatomic) unsigned long long length;

+ (char)_isStringStopWord:(id)a0;

- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0;

@end
