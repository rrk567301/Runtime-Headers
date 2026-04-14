@class NSString, NSURL;

@interface CalStoreRemoteManagedNode : CalStoreRemoteManagedObject {
    NSURL *_objectURI;
}

@property (retain, nonatomic) NSString *color;
@property (nonatomic) BOOL isWritable;
@property (retain, nonatomic) NSString *notes;
@property (nonatomic) int order;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *uid;

+ (BOOL)supportsSecureCoding;
+ (id)hexValueForColor:(id)a0;
+ (id)colorFromHexString:(id)a0;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)compareTitle:(id)a0;

@end
