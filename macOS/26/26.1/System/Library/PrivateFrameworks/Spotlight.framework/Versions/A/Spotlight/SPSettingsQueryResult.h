@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)initWithResult:(id)a0;
- (id)groupName;
- (id)displayName;
- (id)valueForAttribute:(id)a0;
- (id)category;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
