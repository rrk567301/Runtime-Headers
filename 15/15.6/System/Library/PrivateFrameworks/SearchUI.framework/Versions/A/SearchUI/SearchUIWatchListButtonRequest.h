@class NSString;

@interface SearchUIWatchListButtonRequest : NSObject

@property (retain) NSString *identifier;
@property int type;
@property char isHorizontallySrollingStyle;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
