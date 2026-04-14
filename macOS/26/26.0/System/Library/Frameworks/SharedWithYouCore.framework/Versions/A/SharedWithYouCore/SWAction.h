@class NSUUID, _SWActionResponse;
@protocol _SWActionResponseHandler;

@interface SWAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL hasSentResponse;
@property (retain, nonatomic) _SWActionResponse *response;
@property (weak, nonatomic) id<_SWActionResponseHandler> responseHandler;
@property (copy, nonatomic) id /* block */ responseHandlerBlock;

- (BOOL)isEqualToAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)fail;
- (void)fulfill;
- (void)_processResponse;
- (void)failWithResponse:(id)a0;
- (void)fulfillWithResponse:(id)a0;

@end
