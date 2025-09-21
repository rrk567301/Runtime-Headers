@class ICMusicLibraryAuthToken, NSString, NSError, NSDate;

@interface ICMusicLibraryAuthTokenStatus : NSObject <ICMutableMusicLibraryAuthTokenStatus, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) ICMusicLibraryAuthToken *token;
@property (copy, nonatomic) NSError *lastError;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (nonatomic) char shouldExcludeFromBackgroundRefresh;
@property (nonatomic, getter=isFrozen) char frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
