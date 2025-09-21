@class NSString, _WMWindowTilingState;

@interface _WMRestoreTilingStateActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSString *windowID;
@property (readonly, copy, nonatomic) _WMWindowTilingState *tilingState;
@property (readonly, nonatomic) char useVisibilityBasedFencing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestID:(id)a0 windowID:(id)a1 tilingState:(id)a2 useVisibilityBasedFencing:(char)a3;
- (id)initWithWindowID:(id)a0 tilingState:(id)a1 useVisibilityBasedFencing:(char)a2;

@end
