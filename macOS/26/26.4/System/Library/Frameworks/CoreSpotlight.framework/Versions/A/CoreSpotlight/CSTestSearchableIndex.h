@interface CSTestSearchableIndex : CSSearchableIndex {
    unsigned int _user;
}

+ (id)defaultSearchableIndex;

- (id)connection;

@end
