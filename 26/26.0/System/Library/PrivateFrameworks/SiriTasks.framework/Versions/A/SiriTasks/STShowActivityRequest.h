@interface STShowActivityRequest : AFSiriRequest {
    long long _dataType;
    long long _view;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)dataType;
- (id)initWithCoder:(id)a0;
- (long long)view;
- (id)createResponse;
- (id)_initWithDataType:(long long)a0 view:(long long)a1;

@end
