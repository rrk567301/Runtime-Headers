@class NSString;

@interface AASessionGroup : NSObject {
    void /* function */ groupName;
}

@property (class, nonatomic, readonly) AASessionGroup *default;

@property (nonatomic, copy) NSString *groupName;

- (id)initWithGroupName:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
