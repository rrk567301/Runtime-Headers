@class NUSource;

@interface PLEditSource : NSObject

@property (readonly, nonatomic) NUSource *resolvedSource;
@property (readonly, retain, nonatomic) NUSource *source;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) BOOL isRAWSource;

- (id)description;
- (void)setIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithResolvedSource:(id)a0 mediaType:(long long)a1;
- (void)setResolvedSource:(id)a0 mediaType:(long long)a1;

@end
