@interface ABLinkPeopleCommand : ABLinkingCommand {
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (BOOL)ignoresGuardianRestrictions;
- (id)actionName;
- (void)changePeople:(id)a0;
- (id)pickPreferredPersonFromPeople:(id)a0;
- (void)preferSomeoneForProperties:(id)a0;

@end
