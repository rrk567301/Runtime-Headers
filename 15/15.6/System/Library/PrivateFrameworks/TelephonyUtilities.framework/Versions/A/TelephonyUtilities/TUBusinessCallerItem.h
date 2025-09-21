@class NSString, NSURL;

@interface TUBusinessCallerItem : NSObject <TUBusinessCallerItem>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *department;
@property (readonly, copy, nonatomic) NSURL *logoURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 department:(id)a1 logoURL:(id)a2;
- (char)isEqualToCallerItem:(id)a0;

@end
